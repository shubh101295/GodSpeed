import pydot
import sys
from tqdm import tqdm

#	flex lexel.l
#	gcc -o parser parser.tab.c lex.yy.c -lfl
#	dot -Tsvg parser.dot > parser.svg

file_inp = sys.argv[1]

graph = pydot.Dot("automata", graph_type = "digraph")
graph.set_node_defaults(fontsize = '10')
graph.set_edge_defaults(fontsize = '9')

nline = sum(1 for line in open(file_inp))
# print(f"have total of {nline} in file")

node = ""
lhs = ""
transfer_state = 0
i = 0

with open(file_inp) as out:

    for line in tqdm(out, total=nline):

        i+=1

        words = line.split()

        if words and "State" == words[0] and len(words) == 2:
        # if "State" in words and len(words) == 2:
        # if "State" in line:
            node = words[1] # second word in line is node number.
            # print(f"set node to {node} at line {i}, word is {words}")
            continue

        start_node = "S" + node

        if "go to" in line:

            lhs = words[0]
            transfer_state = words[-1]

            end_node = "S" + transfer_state
            # print(f"go to detected at line {i} from {start_node}, going to {end_node}, with {lhs}")
            if "shift" in line: #shifting occurs iff its a terminal char. add green.
                # print("recognized a terminal character")
                graph.add_edge(pydot.Edge(start_node, end_node, color = "green", label = lhs))

            else: # non terminal
                # print("recognized a non-terminal character")
                graph.add_edge(pydot.Edge(start_node, end_node, color = "red", label = lhs))

            continue

        if " accept" in line:# accept state, add highlight!!

            avail = graph.get_node(start_node)

            if avail:
                graph.get_node(start_node)[0].set_shape("box")

            else:
                graph.add_node(pydot.Node(start_node, shape="box"))


graph.write_raw("parser.dot")
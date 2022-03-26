#include "node.hpp"
#include<fstream>

using namespace std;

long long node_count = 0;

ofstream nout, eout, treeout;
ifstream nin, ein;

void dfs(Node* root)
{
    if(root == NULL) return;

    long long root_count = node_count;
    for (auto x : root->current_node_children)
    {
        node_count++;
        nout << "node"<<node_count<<"[label=\"";
        if(x.is_terminal_node)
        {
            if(x.terminal_string_value[0] == '\"')
            {
                nout<<"\\";
                nout<<x.terminal_string_value.substr(0, x.terminal_string_value.length() - 1);
                nout<<"\\\"\"];\n";
            }
            else
            {
                nout<<x.terminal_string_value<<"\"];\n";
            }
            eout<<"\"node"<<root_count<<"\"->\""<<"node"<<node_count<<"\";\n";
        }
        else
        {
            nout<<x.non_terminal_node->node_name<<"\"];\n";
            eout<<"\"node"<<root_count<<"\"->\""<<"node"<<node_count<<"\";\n";
            dfs(x.non_terminal_node);
        }
    }
}

void dump_dot_file(string file_name, Node* root)
{
    string line;
    nout.open("ast.node");
    eout.open("ast.edge");
    treeout.open(file_name);

    dfs(root);

    nout.close();
    eout.close();

    treeout<<"digraph G {\n";

    nin.open("ast.node");
    while (getline(nin, line))
    {
        treeout<<line<<"\n";
    }
    nin.close();

    treeout <<"\n";
    treeout <<"\n";

    ein.open("ast.edge");
    while (getline(ein, line))
    {
        treeout<<line<<"\n";
    }
    ein.close();

    treeout<<"\n";
    treeout<<"}";
    treeout.close();
}

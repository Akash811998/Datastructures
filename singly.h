

//Macros
#define DATA_LENGTH 10 

//node variable declaration
typedef struct __node_s
{
    char data[DATA_LENGTH];
    struct __node_s *next_node;
}__attribute__((packed)) s_node;



//private function declarations
s_node* LL_init(s_node *head,char *);
uint32_t LL_count_nodes(s_node*);
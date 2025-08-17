

//Macros
#define DATA_LENGTH 20 

//node variable declaration
typedef struct __node_s
{
    char data[DATA_LENGTH];
    struct __node_s *next_node;
}__attribute__((packed)) s_node;



//private function declarations
s_node* LL_singly_init(s_node *head,char *);
uint32_t LL_singly_count_nodes(s_node*);
void LL_singly_display_nodes(s_node *start);
bool LL_singly_insert_node(s_node *start,char*);
s_node* LL_singly_delete_all(s_node*);
s_node* LL_singly_delete_node(uint32_t , s_node*);
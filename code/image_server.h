#define MESSAGE_LEN 100
#define MAX_KEYWORDS 10
#define MAX_CLIENTS 10

#define GW_SERVER 0
#define CLIENT_GW 1
#define CLIENT_SERVER 2
#define CLIENT_DEATH 10
#define SERVER_DEATH 20


#define ADD_PHOTO 50
#define ADD_KEYWORD 51
#define SEARCH_PHOTO 52
#define SEARCH_KEYWORD 53
#define DELETE_PHOTO 54

typedef struct message{
    int type;
    char buffer[MESSAGE_LEN];
    uint32_t port;
} message;

typedef struct server{
    int health;
    char ip[MESSAGE_LEN];
    int port;
} server;

typedef struct photo{
    char name[MESSAGE_LEN];
    uint32_t id;
    char keyword[MAX_KEYWORDS][MESSAGE_LEN];
    int nkey;
} photo;

/*void error(const char *msg)
{
    perror(msg);
    exit(1);
}*/

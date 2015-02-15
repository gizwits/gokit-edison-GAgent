#ifndef __GAGENT_SOCKET_H_
#define __GAGENT_SOCKET_H_

#define SOCKET_RECBUFFER_LEN (1*1024)
#define SOCKET_TCPSOCKET_BUFFERSIZE    1*1024
extern u8 *g_GAgent_stSocketRecBuffer;
int  Status_Socket(void);

extern void GAgent_Socket_DoTCPServer(void);
extern void GAgent_Socket_DoUDPServer(void);
extern int GAgent_Socket_SendData2Client(u8* pdata, int datalength,unsigned char Cmd );

extern int GAgent_Socket_Init(void);
void Init_Service(void);
int GAgent_Socket_CheckNewTCPClient(void);
void GAgent_Socket_SendBroadCastPacket( int UdpFlag );

extern int g_GAgent_TCPServerFd;
extern int g_GAgent_UDPServerFd;
extern struct sockaddr_t g_GAgent_stUDPBroadcastAddr;//¨®?¨®¨²UDP1?2£¤
extern int g_GAgent_UDPBroadcastServerFd;
//implate in software/lib/adapter*
extern int connect_mqtt_socket(int iSocketId, struct sockaddr_t *Msocket_address, unsigned short port, char *MqttServerIpAddr);
extern void GAgent_Socket_CreateTCPServer(int tcp_port);
extern void GAgent_Socket_CreateUDPServer(int udp_port);
extern void GAgent_Socket_CreateUDPBroadCastServer( int udp_port );
#endif

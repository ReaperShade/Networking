 1. PORT NUMBER CONCEPTS 


 
 			//In computer networking, a port number is a numeric identifier that helps identify a specific process or service running on a computer or device. It is part of the addressing information used in the transport layer protocols, such as the Transmission Control Protocol (TCP) and the User Datagram Protocol (UDP). A port number is a 16-bit unsigned integer, which means it can have a value between 0 and 65,535.
 		
 			//Port numbers help ensure that network traffic reaches the correct application or service on a computer or device. When data packets are transmitted over a network, they include the source and destination port numbers to indicate the process or service they are intended for. By using port numbers, multiple applications can run simultaneously on a device and communicate through the network without conflicts.
 	
 	
 	
	 	1.1 Well-known ports
	 						//Port numbers from 0 to 1,023 are known as well-known ports or system ports, and they are assigned by the Internet Assigned Numbers Authority (IANA) to specific protocols or services.
	 	

	 	1.2 Dynamic or private Port
	 								//Port numbers from 1,024 to 65,535 are known as dynamic or private ports, and they can be used by any application or service. These ports are often used for client-server communication, where a client initiates a connection to a server using a specific port number.
 











 2. COMMON PORT NUMBERS 





 
 1. FTP (File transfer protocol - 20,21 - TCP)
 
 		//File Transfer Protocol (FTP) is the protocol that actually lets you transfer files across an IP network, and it can accomplish this between any two machines that are using it. But FTP isn’t just a protocol; it’s also a program. Operating as a protocol, FTP is used by applications. As a program, it’s employed by users to perform file tasks by hand. FTP also allows for access to both directories and files and can accomplish certain types of directory operations, such as relocating files into different directories
 	








 2. SSH (Secure Shell - 22 - TCP)
 
 		//The Secure Shell (SSH) protocol sets up a secure Telnet session over a standard TCP/IP connection and is employed for doing things like logging into other systems, running programs on remote systems, and moving files from one system to another.







 3. SFTP (Secure file transfer protocol - 22 - TCP)
 
 		//Secure File Transfer Protocol (SFTP) is used when you need to transfer files over an encrypted connection. It uses an SSH session (which was previously covered), which encrypts the connection, and SSH uses port 22, hence the port 22 for SFTP.






 
 4. TELNET - 23 - TCP
 
 		//Telnet is the chameleon of protocols—its specialty is terminal emulation. It allows a user on a remote client machine, called the Telnet client, to access the resources of another machine, the Telnet server. Telnet achieves this by pulling a fast one on the Telnet server and making the client machine appear as though it were a terminal directly attached to the local network. This projection is actually a software shell—a virtual terminal that can interact with The chosen remote host.
 	



 
 
 5. SMTP (Simple mail transfer protocol - 25 - TCP)
 
 		//Simple Mail Transfer Protocol (SMTP), answering our ubiquitous call to email, uses a spooled, or queued, method of mail delivery. Once a message has been sent to a destination, the message is spooled to a device—usually a disk. The server software at the destination posts a vigil, regularly checking the queue for messages. When it detects them, it proceeds to deliver them to their destination. SMTP is used to send mail; POP3 is used to receive mail.
 





 

 6. DNS (Domain name server - 53 - TCP/UDP)
 
 		//Domain Name Service (DNS) resolves hostnames—specifically, Internet names, such as www.lammle.com—to their corresponding IP addresses. DNS is used to resolve a fully qualified domain name (FQDN)—for example, www .lammle.com or todd.lammle.com—to an IP address. An FQDN, or DNS namespace, is a hierarchy that can logically locate a system based on its domain identifier.



 



 
 7. DHCP (Dynamic host configuration protocol - 67,68  - UDP) - BOOTP 
 
 		//Dynamic Host Configuration Protocol (DHCP) assigns IP addresses to hosts with information provided by a server. It allows easier administration and works well in small to even very large network environments. Many types of hardware can be used as a DHCP server, including routers.
 





 
 8. TFTP (Trivial FileTransfer Protocol - 69 - UDP)
 
 		//Trivial File Transfer Protocol (TFTP) is the stripped-down, stock version of FTP, but it’s the protocol of choice if you know exactly what you want and where to find it—plus it’s easy to use, and it’s fast, too! It doesn’t give you the abundance of functions that FTP does, though. TFTP has no directory-browsing abilities; it can do nothing but send and receive files.
 
 
 



 
 9. HTTP (Hypertext Transfer Protocol - 80 - TCP)
 
 		//HTTP is used to manage communications between web browsers and web servers, and it opens the right resource when you click a link, wherever that resource may actually reside.
 
 




 
 10. POP3 (Post Office Protocol v3 - 110 - TCP)
 
 		//Post Office Protocol (POP) gives us a storage facility for incoming mail, and the latest version is called POP3. Basically, how this protocol works is when a client device connects to a POP3 server, messages addressed to that client are released for downloading. It doesn’t allow messages to be downloaded selectively, but once they are, the client-server interaction ends and you can delete and tweak your messages locally at will. A newer standard, IMAP, is being used more and more in place of POP3 because of security.
 






 11. NTP (Network Time Protocol - 123 - UDP)
 
 		//used to synchronize the clocks on our computers to one standard time source (typically, an atomic clock). Network Time Protocol (NTP) works in conjunction with other synchronization utilities to ensure that all computers on a given network agree on the time.
 




 
 
 12. IMAP (Internet Message Access Protocol - 143 - TCP)
 
 		//Because Internet Message Access Protocol (IMAP) makes it so you get control over how you download your mail, with it, you also gain some much-needed security. 
 




 
 
 13. SNMP (Simple Network Management Protocol - 161/162 - UDP)
 
 		//Simple Network Management Protocol (SNMP) collects and manipulates valuable network information. It is a protocol used for managing and monitoring network devices like routers, switches, servers, printers etc. The MIB is basically a database with a set of predefined questions the NMS can ask the agents regarding the health of the device or network.
 
 		//SNMPv3 is now the standard and uses bothTCP and UDP, unlike v1, which used only UDP. Version 3 added even more security and message integrity, authentication, and encryption. So, be careful when running SNMPv1 and v2 because they are susceptible to a packet sniffer reading the data.



 


 
 
  14. LPAD (Lightweight Directory Access Protocol - 389 - TCP)
 
        //Through the Lightweight Directory Access Protocol (LDAP), that’s how. LDAP is a protocol used to access and query directory services systems such as Microsoft Active Directory. And there is a secure version of LDAP called LDAPS that uses port 636.







 
 15. HTTPS (HypertextTransfer Protocol Secure 443 - TCP)
 
 		//Hypertext Transfer Protocol Secure (HTTPS) is a secure version of HTTP that arms you with a whole bunch of security tools for keeping transactions secure between a web browser and a server. It’s what your browser needs to fill out forms, sign in, authenticate, and encrypt an HTTP message when you make a reservation or buy something online.
 





 
 
 16. TLS (Transport layer security - 995 / SSL  Secure sockets layer - 465 - TCP)
 
 		//Both Transport Layer Security (TLS) and its forerunner, Secure Sockets Layer (SSL), ==are cryptographic protocols== that come in really handy for enabling secure online data-transfer activities like browsing the Web, instant messaging, Internet faxing, and so on. They both use X.509 certificates and asymmetric cryptography to authenticate to the host they are communicating with and to exchange a key. This key is then used to encrypt data flowing between the hosts.
 
 






 
 17. SMB (Server Message Block (SMB)
 
 		//is used for sharing access to files and printers and other communications between hosts on a Microsoft Windows network. SMB runs mostly on TCP port 445 now, but SMB can also run on UDP port 137 and 138 and on TCP port 137 and 139 using NetBIOS.)
 





 
 18. SYSLOG - 514 - UDP - TCP 601
 
 		//syslog is a standard protocol used for sending and logging system messages. Here are some key points about syslog: It allows separation of the software that generates messages from the system that stores them and analyzes them. Works on a client/server model where syslog enabled devices (clients) generate and send messages which are received and stored by a syslog server.






 
 
 19. SMTP TLS (TCP 587)
 
 		//SMTP stands for Simple Mail Transfer Protocol. It is a TCP/IP protocol used for sending and routing emails between servers: SMTP is used for communication between mail servers to route and deliver email over the internet. Clients (like email apps) send emails to their local SMTP server which then forwards it to the recipient's SMTP server. SMTP uses commands like HELO, MAIL FROM, RCPT TO, DATA to handshake and transfer emails. Email content is encoded in ASCII format during SMTP transfer.
 
 






 
 20. RDP (Remote Desktop Protocol (TCP 3389)
 
 		//It allows you to connect to another computer and run programs. RDP operates somewhat like Telnet, except instead of getting a command-line prompt as you do with Telnet, you get the actual graphical user interface (GUI) of the remote computer. Clients exist for most versions of Windows, and Macs now come with a preinstalled RDP client.
 





 
 22. SIP - SESSION INITIATION PROTOCOL - (SIP (VoIP) (TCP or UDP 5060/TCP 5061)
 
 		//Session Initiation Protocol (SIP) is a hugely popular signaling protocol used to construct and deconstruct multimedia communication sessions for many things like voice and video calls, videoconferencing, streaming multimedia distributions, instant messaging, presence information, and online games over the Internet.
 






 23. NETBIOS  (TCP and UDP 137–139)
 
 		//Network Basic Input/Output System works only in the upper layers of the OSI model and allows for an interface on separate computers to communicate over a network.
 
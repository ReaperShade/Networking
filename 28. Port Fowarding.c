 1. PORT FORWARDING 

 


	 Port forwarding is a technique that allows incoming network connections to remote devices on a private network. Here is an overview:
	 	
	 	- Port forwarding configures a router or firewall to forward incoming traffic on specific ports to internal hosts.
	 	- It is useful when hosts on a private LAN need to be accessible from the public internet.
	 	- For example, to allow external SSH access to an internal server, port 22 can be forwarded to the servers private IP.
	 	- When traffic hits the routers public IP on port 22, it will be forwarded to the internal server IP and port 22.
	 	- Common uses include enabling access to web servers, FTP servers, game servers and more on a private network.
	 	- Port forwarding rules specify the inbound port, protocol (TCP/UDP), and the target private IP and port to forward it to.
	 	- Typically the routers public WAN IP address and ports are exposed, obscuring the private LAN IP scheme.
	 	- Security can be improved by forwarding only to specific required ports and IPs, and using VPNs where possible.
	 	- Port forwarding enables convenient remote access to devices on home and business networks.
	 	- Without port forwarding, no incoming connectivity to private devices would be possible.

	In summary, port forwarding allows external network connections to reach devices on an internal network using specific router port and IP mappings.






 
 	//Here is an easy example to understand how port forwarding works:**
 	
 	Let say you have a web server running at IP 192.168.1.100 on your internal private network at home. You want to make the web server accessible from the public internet. 
 	
 	Your home router has a public IP of 203.0.113.2 provided by your ISP.
 	
 	You setup port forwarding on the router as follows:
 	
 	- Inbound port: 80 (HTTP web traffic)
 	- Protocol: TCP
 	- Private IP: 192.168.1.100 
 	- Private port: 80
 	

 	/*
 	This means any incoming traffic to the routers public IP (203.0.113.2) on port 80 will be forwarded to private IP 192.168.1.100 on port 80. 
 	Now if someone browses to http://203.0.113.2 from the internet, the router will forward the traffic to your internal web server at 192.168.1.100:80.
 	The return traffic from the web server is tracked by the router using the port forwarding table, so response packets are sent back properly to the internet visitor.
 	This allows external visitors to access the private web server using public IP 203.0.113.2. The internal IP is hidden and protected by the routers NAT firewall.
 	The same concept applies for exposing any device or service on a private network to the internet by configuring port forwarding rules on the public-facing router.
 


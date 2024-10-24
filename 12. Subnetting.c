 1. SUBNETTING. 

 
	 	//Subnetting is the process of dividing a network into smaller subnetworks called subnets. It involves splitting an IP network into smaller subnets using subnet masks. Here are some key points about subnetting:
	 
	 	- Subnetting allows a network admin to divide a large network into smaller, more manageable logical networks.
	 	- It is commonly used to optimize networks by grouping similar devices, improving security, and reducing broadcast traffic.
	 	- A default Class C network has a /24 subnet mask, allowing 254 host addresses. Subnetting divides this further.
	 	- To subnet, additional bits from the host part of the IP address are 'borrowed' to create more network address bits.












 2. STEPS FOR SUBNETTING 


 
 	Steps for divide a network (subnetting)
 
 		1. Identify the network type (A, B, C classes)
 		2. Identify how many host there are in the network (according the type network. Example: 254 for c type)
 		3. Determine the subnet mask.
 		4. convert subnet mask in binary
 		5. Add left to right 1 to 0 (where 1 = 2 subnets)
 
 			2^1 = 2
 			2^2 = 4
 			2^3 = 8
 							
 		6. convert subnet mask (modified to decimal)
 		7. determine how many host in the new subnet mask and divide between  of subnets. example: 255.255.255.192 (256 hosts / 4) = 64
 		8. increase the ip + 64
 
 
 		Reference:
 		https://www.youtube.com/watch?v=lEKR7WtKzDA

 
 
 			Example:
 
 			- IP: 192.190.0.0
 			- we need 4 subnets
 			- subnet mask: 255.255.255.0 = 11111111.11111111.11111111.00000000
 
 
 			Resolve: SUBNET = 11111111.11111111.11111111.11000000 (2 numbers 1, because 1=2 subnet, we have 4 subnets) = 255.255.255.192 (convert binary to decimal)
 			- 192.190.0.0 (first subnet)
 			- 192.190.0.64 (2 subnets)
 			- 192.190.0.128 (3)
 			- 192.190.0.192. (4)
 
 
 			//No assigning the address 192.190.0.0 (main address) and the broadcast address for each network (192.190.0.63) for the first network




			 Example :
			 
 			- IP: 172.16.88.200
 			- Class B
 			- Subnet mask: 255.255.0.0
 			- networks: 172.16.0.0        (TODO EL HOST LO LLEVAMOS A VALOR 0)
 			- firt host: 172.16.0.1
 			- Broadcast Address : 172.16.255.255    (todos los 0 cambian a 255 255) The broadcast address is used by the router to send messages to the network, such as when the ARP protocol needs to know whose Mac you belong to by having the IP. sends an address to all hosts on the network to know.
 			- last host: 172.16.255.254             (1 is subtracted from the broadcast address)
 	
 
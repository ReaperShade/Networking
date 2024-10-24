###### 1. CIDR 

>
> 
> 	- Classless Inter-Domain Routing (CIDR) is a method of representation and replaces the fixed assignment between IPv4 address and network classes (A, B, C, D, E).
> 	- The division is based on the subnet mask or the so-called CIDR suffix, which allows the bitwise division of the IPv4 address space and thus into subnets of any size.
> 	- ==The CIDR suffix indicates how many bits from the beginning of the IPv4 address belong to the network.== It is a notation that represents the subnet mask by specifying the number of 1-bits in the subnet mask.

> 
> 
> 		- CIDR IP addresses are written in a format like **192.168.1.0/24**. Here, 24 is the prefix length.
> 		- The prefix length denotes the number of shared, high-order bits in the subnet mask. **This is another way to specify the netmask.**
> 		- **For example, /24 means the first 24 bits are the network part of the address, and the remaining 8 bits are for host addresses. So the subnet mask is 255.255.255.0.**
> 		- ==CIDR notation uses an IP address followed by a slash (/) and a number indicating the number of bits used to represent the network. For example, "192.168.1.0/24" indicates that the first 24 bits represent the network and the last 8 bits represent the hosts.==



> 
> 
**> 		  Subnet masks								CIDR values**
> 
> 
> 			255.0.0.0 								     /8
> 			255.128.0.0 							             /9
> 			255.192.0.0 						          /10
> 			255.224.0.0                                                                 /11
> 			255.240.0.0 						                    /12
> 			255.248.0.0 							            /13
> 			255.252.0.0 							            /14
> 			255.254.0.0 							            /15
> 			255.255.0.0 							            /16
> 			255.255.128.0 							    /17
> 			255.255.192.0 							    /18
> 			255.255.224.0 							    /19
> 			255.255.240.0 							    /20
> 			255.255.248.0 							    /21
> 			255.255.252.0 							    /22
> 			255.255.254.0 							    /23
> 			255.255.255.0  							    /24
> 			255.255.255.128 						            /25
> 			255.255.255.192 						            /26
> 			255.255.255.224 						            /27
> 			255.255.255.240 						           /28
> 			255.255.255.248 						           /29
> 			255.255.255.252							   /30
> 
> 
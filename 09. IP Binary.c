 1. DEFINITIONS 



 
	 	- Bit: //A bit is one binary digit, either a 1 or a 0.
	 	- Byte: //A byte is 7 or 8 bits, depending on whether parity is used. For the rest of this chapter, always assume a byte is 8 bits.
	 	- Octet: //An octet, made up of 8 bits, is just an ordinary 8-bit binary number. In this chapter, the terms byte and octet are completely interchangeable, and they are  
	 			 //typically displayed in decimal up to 255.
	 	- Network Address: //This is the designation used in routing to send packets to a remote network for example, 10.0.0.0, 172.16.0.0, and 192.168.10.0.
	 	- IP Address: //A logical address used to define a single host; however, IP addresses can be used to reference many or all hosts as well. If you see something written as just 
	 	              //IP  it is referring to IPv4. IPv6 will always be written as IPv6.
	 	- Broadcast Address: //The broadcast address is used by applications and hosts to send information to all hosts on a network. Examples include 255.255.255.255, which 
	 						 //designates  all networks and all hosts; 172.16.255.255, which specifies all subnets and hosts on network 172.16.0.0; and 10.255.255.255, which broadcasts to all subnets and hosts on network 10.0.0.0.
	 








 2. NETWORK ADDRESSING 

 
		//The network address: also called the network number—uniquely identifies each network. Every machine on the same network shares that network address as part of its IP address. In the IP address 172.16.30.56, for example, 172.16 is the network address
	 	
	 	// - The host address is assigned to and uniquely identifies each machine on a network. This part of the address must be unique because it identifies a particular machine—an individual—as opposed to a network, which is a group. So in the sample IP address 172.16.30.56, the 30.56 is the host address
	 	// - The designers of the Internet decided to create classes of networks based on network size. For the small number of networks possessing a very large number of hosts, they created the rank Class A network. At the other extreme is the Class C network, which is reserved for the numerous networks with a small number of hosts.
	 	 
 	



 	
 	
 	
 	 	Summary of the three classes of networks
 	
 	
 	 		             8 bits 		      8 bits   		        8 bits              8 bits
 	
 	 	CLASS A         Network                hosts			    hosts		         hosts
 	
 	 	CLASS B         Network                Network              hosts                hosts
 	
 		CLASS C         Network                Network              Network              hosts
 	
 		CLASS D 	    Multicast
 	
 		CLASS E        Research














 3. BINARY TO DECIMAL AND DECIMAL TO BINARY 


 
 	- 1 BIT  =   The smallest unit of data. 
 	- NIBBLE =   4 BITS
 	- 1 BYTE =   8 BITS 
 
 
 	 Binary: //Each digit used is limited to being either a 1 (one) or a 0 (zero), and each digit is called 1 bit (short for binary digit). Typically, you count either 4 or 8   
 	 		 //bits together, with these being referred to as a nibble and a byte, respectively.
 
 
 
 	Table binary to decimal
 
 		          2^7 -  2^6  - 2^5 - 2^4 - 2^3 - 2^2 - 2^1 - 2^0             //Where there is a 0 no calculate, where there is a 1 calculate. Add all values. 
 
 		          128    64     32     16    8     4     2     1
 
 		         									     		 
 
 
 
 		          Example: 10110 = 22    (16 + 4 + 2)
 
 
 
 
 
 		          Table Decimal to binary
 
 		           128    64     32     16    8     4     2     1        //We need to rest the decimal  to each position. example: 83 es mayor que 128? No = 0, Si = 1 y resta el numero
 
 		           0       1     0       1    0     0     1     1 
 
 
 		           83 = 01010011 
 
 
 
 
 
 		          MEMORIZATION CHART - Binary to Decimal 
 
 
 		  	     - 10000000 = 128 
 		  	     - 11000000 = 192
 		  	     - 11100000 = 224 
 		  	     - 11110000 = 240 
 		  	     - 11111000 = 248 
 		  	     - 11111100 = 252 
 		  	     - 11111110 = 254 
 		  	     - 11111111 = 255















 4. HEXADECIMAL TO BINARY  TO DECIMAL

 
 				
 				 Hexadecimal Value         Binary Value         Decimal Value
 				    
 						   0                         0000                  0 
 						   1                         0001                  1
 						   2                         0010                  2 
 						   3                         0011                  3
 						   4                         0100                  4
 						   5                         0101                  5 
 						   6                         0110                  6
 						   7                         0111                  7
 						   8                         1000                  8
 						   9                         1001                  9
 						   A                         1010                  10 
 						   B                         1011                  11
 						   C                         1100                  12
 						   D                         1101                  13
 						   E                         1110                  14
 						   F                         1111                  15
 
 
 
 				  ==Example 1:==   Convert 0x6a  to  Binary   //some manufacturers put 0x in front of characters so you know that they’re a hex value, while others just give you an h.
 
								6 = 0110 
								a = 1010 
								Result = 01101010 
 
 
 				    ==Example 2:== Convert binary to hex.  Convert 01010101 to Hex 
 
 						    	- divide the binary in nibble (4)
 						    	- 0101 = 5 
 						    	- 0101 = 5 
 						    	- Result = 55 
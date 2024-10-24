1. CRYPTOGRAPHY


		//Encryption is utilized on the Internet to securely transmit data such as payment information, emails, and personal details, ensuring confidentiality and protection against tampering. Various cryptographic algorithms based on mathematical operations are employed for this purpose. Through encryption, data is transformed into a format that is unreadable to unauthorized individuals. Digital keys used in either symmetric or asymmetric encryption processes facilitate this encryption. The ease with which cipher texts or keys can be compromised depends on the specific encryption methods employed. When modern cryptographic techniques with long key lengths are utilized, they offer a high level of security and are currently considered nearly impossible to break. Generally, encryption techniques can be categorized into symmetric and asymmetric methods. Although asymmetric methods have only been around for a few decades, they are now the most commonly used techniques in digital communication.




		//Symmetric Encryption: The same key is used for both encryption and decryption (e.g., AES, DES).
		//Asymmetric Encryption: Different keys are used; a public key encrypts the data, and a private key decrypts it (e.g., RSA, ECC).







2. SYMMETRIC ENCRYPTION 




		//Symmetric encryption, also known as secret key encryption, is a method that uses the same key to encrypt and decrypt the data. This means the sender and the receiver must have the same key to decrypt the data correctly. If the secret key is shared or lost, the security of the data is no longer guaranteed. Critical actions for symmetric encryption methods represent the distribution, storage, and exchange of the keys. 

		//Advanced Encryption Standard (AES) and Data Encryption Standard (DES) are examples of symmetric encryption algorithms. This type of encryption is often used to encrypt large amounts of data, such as files on a hard drive or data sent over a network. AES is considered to be the most secure encryption algorithm nowadays.









3. ASYMMETRIC ENCRYPTION



		//symmetric encryption, also known as public-key encryption, is a method of encryption that uses two different keys:

   			a public key
    		a private key


		//The public key is used to encrypt the data, while the private key is used to decrypt the data. This means anyone can use a public key to encrypt data for someone, but only the recipient with the associated private key can decrypt the data. Examples of asymmetric encryption methods include Rivest–Shamir–Adleman (RSA), Pretty Good Privacy (PGP), and Elliptic Curve Cryptography (ECC). Asymmetric encryption is used in a variety of applications, some of which include: SSH, SSL, TLS, VPNS







 4. PUBLIC-KEY ENCRYPTION


 		//One advantage of asymmetric encryption is its security. Since the security is based on very hard-to-solve mathematical problems, simple attacks cannot crack it. Furthermore, the issue of key exchange is bypassed. This is a significant problem with symmetric encryption methods. However, since the public key can be accessible to everyone, there is no need to exchange keys secretly. In addition, the asymmetric methods open up the possibility of authentication with digital signatures.








Program a system to control an ATM using the C programming language. The system functionalities should be controlled using the options menu below: 
### Main Menu
1-Client
2-Withdraw
3-Reports
4-Finish

### Client Menu
1-Include
2-Show
3-Change 
4-Delete
5-Return to Main Menu

### Reports Menu
1-Amounts Withdraw
2-Existing Balance Amount
3-Number of Existing of Banknotes
4-Return to Main Menu

The system must maintain at max 50 clients.
Initially, the register is empty and when activating the Include option from the client menu, the system must automatically generate a valid CPF and checking account in the formats 999.999.999-99 and 999.999-x, respectively, and include the new client in the registration if there is user confirmation. A new client can only be added if the CPF or checking account number do not exist already in the system. To your program you should use the modules in the gerador.c archive. 
The show option from the client menu shows the data from the clients registered clients in the system.
The change option from te client menu allows to change the CPF or checking account number of a client. The change is only possible if the client has not made any withdrawls. The system must preserve the format 999.999.999-99 and 999.999-x.
The delete option allows to delete a client from the register if it has not made any withdraw. The checking account number should be used to delete a client. 
To withdraw money, a client must provide their account number and, if it exist in the register, then the system will release the smallest quantity of banknotes for the requested amount. The amount should be show writed in words. The system should be supplied before the first withdrawal and the maximun values for each note are: 100 of 500; 200 of 150; 400 of 50; 800 of 20; 1600 of 10; 3200 of 5; 6400 of 2; and 12800 of 1.

Bellow is each report and it format:
~~~text
---------------------------------------------------------------------------------------------------------------------------- 
Report 'Amounts Withdraw' 
---------------------------------------------------------------------------------------------------------------------------- 
checking-account1 cpf1 R$ value1 
 R$ value2 
 R$ value3 
 R$ total_l 
checking-account2 cpf2 R$ value1 
 R$ value2 
 R$ total_2 
... 
---------------------------------------------------------------------------------------------------------------------------- 
R$ total_value (value in words) 
---------------------------------------------------------------------------------------------------------------------------- 
---------------------------------------------------------------------------------------------------------------------------- 
Report 'Existing Balance Amount' 
---------------------------------------------------------------------------------------------------------------------------- 
R$ value (value in words) 
---------------------------------------------------------------------------------------------------------------------------- 
---------------------------------------------------------------------------------------------------------------------------- 
Report 'Number of existing banknotes' 
---------------------------------------------------------------------------------------------------------------------------- 
Note X quantity1 (value in words) 
Note Y quantity2 (value in words) 
Note Z quantity3 (value in words) 
... 
--------------------------------------------------------------------------------------------------------------------------
~~~


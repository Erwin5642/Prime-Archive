Develop a C program using modules and binary files that:
When registering a car dealership, we have the following definitions and records:
~~~text
#defines SIZE 50
optional char[][TAM]={ {"4.portas"}, {"cambio.automatico"}, {"vidros.eletricos"}, {"abs"}, {"air.bag"}, {"air .conditioned"},
  {"bank.leather"}, {"sensor.parking"}};
struct CAR {
  char plate[9]; //AAA-1234
  char model[SIZE]; //gol, celta, palio, ...
  char manufacturer[TAM]; //chevrolet, fiat, ...
  int manufacturing_year; //1980 to 2016
  int model_year; //1980 to 2017
  char fuel[SIZE]; //alcohol, gasoline, flex, diesel
  char color[SIZE]; //white, silver, black
  int optional[8]; //see optional array
  float purchase_price;
};
struct ADDRESS {
  char street[SIZE];
  int number;
  char neighborhood[TAM];
  char city[SIZE];
  char state[3];
  char cep[11]; //99.999-999
};
struct PHONE {
  char phone[14]; //99 99999-9999
};
struct CUSTOMER {
  char name[SIZE];
  char cpf[15]; //999.999.999-99
  struct ADDRESS address;
  struct home PHONE;
  struct cell phone[5];
  float monthly_income;
};
struct DATA {
  int day, month, year;
};
struct SALE_CAR {
  char plate_car[9];
  char cpf_customer[15];
  float sales_price;
  struct DATE sales_date;
};
~~~
The program must offer the following functionalities through option menus:
### 1-Car Menu
1-Insert a car into the register
2-Delete a car from the register
3-List cars available for sale sorted by manufacturer and model
4-List cars available for sale by selecting one or more options
5-List cars available for sale by selection of year of manufacture range
### 2-Customer Menu
1-Insert a customer into the register
2-Delete a customer from the register
3-List registered customers sorted in increasing order by name
4-List clients in the registry sorted in increasing order by name by selection of monthly salary income range
### 3-Sells Menu
1-Include a sale
2-Delete a sale
3-List cars sold from a given manufacturer, sorted in ascending order by model (the following information must appear: model, license plate, year of manufacture and customer name)
4-List the cars sold of a given model, sorted in increasing order by year of manufacture (the following information must appear: year of manufacture, license plate and customer name)
5-Inform the number of cars sold with the total value of the prices sold
6-Report total profit from sales
### 4-Exit the program

### COMMENTS:
 To insert a car, automatically generate the car information, and the user decides whether the car will be inserted.
 When deleting a car, the user provides the license plate number of the car that they want to delete. Only one car can be excluded
which has not yet been sold.
 To insert a customer, automatically generate the customer information, and the user decides whether the customer will be inserted.
 When deleting a customer, the user provides the CPF of the customer that they want to be deleted. Only one can be excluded
customer if there is no sale recorded for him.
 To enter a sale, both the car and the customer must exist in their respective records.
 To delete a sale, the user provides the license plate number for searching.
 The customer's CPF must be valid.
 Example of a list of cars sorted in ascending order by manufacturer and model
~~~text
-------------------------------------------------- ----------------------------
Board: CAT-2339
Model: onix
Manufacturer: Chevrolet
Year of Manufacture: 2011
Model Year: 2011
Fuel: alcohol
Green color
Optional: abs, bench.leather
Purchase Price: 74000.00
-------------------------------------------------- ----------------------------
Board: EEX-7522
Model: S10
Manufacturer: Chevrolet
Year of Manufacture: 1996
Model Year: 1997
Fuel: diesel
Orange color
Optional: bench.leather
Purchase Price: 140000.00
-------------------------------------------------- ----------------------------
Board: HWN-4442
Model: road
Manufacturer: Fiat
Year of Manufacture: 1997
Model Year: 1998
Fuel: flex
Gray color
Optional: air.bag
Purchase Price: 35400.00
-------------------------------------------------- ----------------------------
Board: NRK-9698
Model: Corolla
Manufacturer: Toyota
Year of Manufacture: 2000
Model Year: 2001
Fuel: flex
Silver color
Optional: electric windows, airbag, automatic transmission
Purchase Price: 10500.00
-------------------------------------------------- ----------------------------
Board: SDC-8925
Model: hillux
Manufacturer: Toyota
Year of Manufacture: 1984
Model Year: 1984
Fuel: alcohol
White color
Optional: electric windows
Purchase Price: 189300.00
-------------------------------------------------- ----------------------------
Board: TWV-3118
Model: goal
Manufacturer: Volkswagen
Year of Manufacture: 1991
Model Year: 1991
Fuel: flex
Yellow color
Optional: automatic exchange
Purchase Price: 6000.00
-------------------------------------------------- ----------------------------
Board: MQV-6733
Model: sloop
Manufacturer: Volkswagen
Year of Manufacture: 2008
Model Year: 2008
Fuel: alcohol
Color: brown
Optional: parking sensor
Purchase Price: 37000.00
-------------------------------------------------- ----------------------------
Board: GLK-3333
Model: voyage
Manufacturer: Volkswagen
Year of Manufacture: 1982
Model Year: 1982
Fuel: alcohol
Red color
Optional: 4.ports
Purchase Price: 17300.00
-------------------------------------------------- ---------------------------
~~~

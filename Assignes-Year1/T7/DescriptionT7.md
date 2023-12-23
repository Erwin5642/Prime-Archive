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
4-Exit the program

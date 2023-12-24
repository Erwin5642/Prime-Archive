For the binary file “carro.dbf” with n records of type CAR
~~~text
#defines SIZE 50
typedef struct {
  long int id_reg;
  char plate[9];
  char model[SIZE];
  char manufacturer[TAM];
  int manufacturing_year;
  int model_year;
  char fuel[SIZE];
  char color[SIZE];
  int optional[8];
  float purchase_price;
} CAR;

optional char[][SIZE]={
   {"4.ports"},
   {"cambio.automatico"},
   {"glados.eletricos"},
   {"abs"},
   {"air.bag"},
   {"air.conditioning"},
   {"bank.leather"},
   {"parking.sensor"}};
~~~
develop a C program using modules with a menu of options to:
1. Enter how many records “carro.dbf” has.
2. Sort the “carro.dbf” records in ascending order by the “plate” field and store them in the “carro.ord” file.
3. Show the records of “carro.ord”.
4. For each type of fuel, inform the number of cars.
5. For each type of option, inform the number of cars. \
The “optional” field of CAR is a vector to indicate which options a car has. For example, the set {1,0,0,0,1,0,0,1} stored in the vector indicates the following optional: "4.doors", "air.bag" and "parking.sensor".

#include <iostream>
#include <vector>

struct Room
{
  bool bedroom;        // Спальня
  bool kitchen;        // Кухня
  bool bathroom;       // Ванная
  bool children_room;  // Детская
  bool living_room;    // Гостиная
};

struct Floor
{
  int ceiling_height; // Высота потолков
  int number_floors;  // Количество этажей
};

struct Region
{
  struct Room room;
  bool house = true;    // Дом
  bool garage = false;          // Гараж
  bool shed = false;            // Сарай
  bool bath = false;            // Баня
};

void facilities(Region& region, std::string answer){
  if(answer == "yes"){
    // region.shed = true;
    region = true;
  }
}

int main(){
  std::cout << "Model village" << std::endl;
  // std::vector<Region> village;
  Region region;
  std::string answer;
  int countRegion;
  std::cout << "Enter count region" << std::endl;
  std::cin >> countRegion;

  std::cout << "Is there garage?" << std::endl;
  std::cin >> answer;
  // std::cin >> region.garage;
  // std::cin >> region.shed;
  facilities(region.garage, answer);
  std::cout << "garage = " << region.garage << std::endl;
  std::cout << "shed = " << region.shed << std::endl;


  // if(answer == "yes"){
  //   region.garage = true;
  //   std::cout << "garage = true" << std::endl;
  // }

  // std::cout << "Is there shed?" << std::endl;
  // std::cin >> answer;
  // if(answer == "yes"){
  //   region.shed = true;
  //   std::cout << "shed = true" << std::endl;
  // }

  // std::cout << "Is there bath?" << std::endl;
  // std::cin >> answer;
  // if(answer == "yes"){
  //   region.bath = true;
  //   std::cout << "bath = true" << region.bath << std::endl;
  // }


  return 0;
}


// Что нужно сделать

// С помощью структур данных создайте подробную модель посёлка.
// В посёлке есть множество участков. Каждый из них имеет свой уникальный номер. 
// На каждом из участков должен быть расположен как минимум 
// один жилой дом, но возможны и другие сооружения, 
// такие как гараж, сарай (бытовка) и баня. Для каждого здания 
// предусмотрена информация о площади, которую он занимает на участке.

// В жилом доме может быть 1–3 этажа. На каждом из этажей 
// может быть 2–4 комнаты. Каждая комната при этом может 
// быть разных типов: спальня, кухня, ванная, детская, гостиная. 
// Для каждой комнаты предусмотрены данные о её площади. 
// Для каждого этажа также есть данные о высоте потолка. 
// В жилом доме и бане может быть печь с трубой, информация 
// об этом также должна быть предусмотрена в данных.

// Для всех упомянутых сущностей надо объявить соответствующие структуры данных.

// Вначале работы программы пользователь заполняет данные 
// о посёлке: вводит общее количество участков и далее 
// начинает детализировать каждый из участков.

// Для каждого участка сначала заполняется общее количество 
// построек, а затем детализируется каждая постройка, этажи, комнаты на этажах.

// По итогам введённых данных вы можете рассчитать некий 
// суммарный параметр, например, процент земли, занимаемой постройками, 
// к общей площади всего посёлка. Главное в этой задаче 
// не сама операция подсчёта, а структуры данных.
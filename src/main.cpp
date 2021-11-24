#include <iostream>
#include <string>
#include <vector>

   // bool bedroom;        // Спальня
  // bool kitchen;        // Кухня
  // bool bathroom;       // Ванная
  // bool children_room;  // Детская
  // bool living_room;    // Гостиная
struct Room {
};

struct Home {
  double ceiling_height;          // Высота потолков
  std::vector<std::string> rooms; // Вектор комнат
  std::vector<double> square;     // Площадь комнаты
  bool bake;
};

struct Region {
  struct Room room;
  bool house = true;    // Дом
  bool garage = false;  // Гараж
  bool shed = false;    // Сарай
  bool bath = false;    // Баня
};

// void facilities(Region& region, std::string answer){
//   if(answer == "yes"){
//     // region.shed = true;
//     region = true;
//   }
// }

int main() {
  std::cout << "Model village" << std::endl;
  Region region;
  Home home;
  std::string setRoom;
  std::string setBake;
  int countRegion;
  int countRoom;
  int countFloor;
  double setSquare;


  std::cout << "Enter count floor" << std::endl;
  std::cin >> countFloor;
  if(countFloor > 0 && countFloor < 4){
    for(int i = 1; i <= countFloor; i++){
      std::cout << "Enter ceiling height [" << i << "] floor" << std::endl;
      std::cin >> home.ceiling_height;
      std::cout << "Count room" << std::endl;
      std::cin >> countRoom;
      if(countRoom > 1 && countRoom < 5){
        for(int j = 1; j <= countRoom; j++){
          std::cout << "Enter room" << std::endl;
          std::cin >> setRoom;
          home.rooms.push_back(setRoom);
          std::cout << "Enter square room" << std::endl;
          std::cin >> setSquare;
          home.square.push_back(setSquare);
        }
        std::cout << "There is a stove in the house? y/n" << std::endl;
        std::cin >> setBake;
        if(setBake == "y"){
          home.bake = true;
        } else {
          home.bake = false;
        }
      } else {
        std::cout << "Invalid value rooms" << std::endl;
      }
    }
  } else {
    std::cout << "Invalid value floors" << std::endl;
  }




  for(int i = 0; i < home.rooms.size(); i++){
    std::cout << i << " " << home.rooms[i] << " - " << home.square[i] << std::endl;
  }

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
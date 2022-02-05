#include <iostream>
#include <string>
#include <vector>

// bool bedroom;        // Спальня
// bool kitchen;        // Кухня
// bool bathroom;       // Ванная
// bool children_room;  // Детская
// bool living_room;    // Гостиная

// enum type_room {
//   bedroom,        // Спальня
//   kitchen,        // Кухня
//   bathroom,       // Ванная
//   children_room,  // Детская
//   living_room     // Гостиная
// };

// enum type_building {
//   home,    // Дом
//   garage,  // Гараж
//   shed,    // Сарай
//   bath     // Баня
// };

// struct Room {
//   type_room type_room;  // Тип комнат
//   double square;        // Площадь комнаты
// };

// struct Floor {
//   std::vector<Room> rooms;  // Вектор комнат
//   double ceiling_height;    // Высота потолков
// };

// struct Home {
//   std::vector<Floor> floor;
// };

// struct Region {
//   type_building type_building;

//   // bool house = true;    // Дом
//   // bool garage = false;  // Гараж
//   // bool shed = false;    // Сарай
//   // bool bath = false;    // Баня
//   bool bath_bake = false;
//   bool home_bake = false;
// };
///////////////////////////////////////////////////////////////////////////////
enum room_type {
  living,    // Гостиная
  children,  // Детская
  bedroom,   // Спальня
  kitchen,   // Кухня
  toilet,    // Туалет
  bathroom   // Ванная
};

struct room {
  double area;  // Площадь
  room_type type;
};

struct store {
  double height;  // Высота потолков
  std::vector<room> rooms;
};

enum building_type {
  house,      // Дом
  garage,     // Гараж
  bathhouse,  // Баня
  barn,       // Сарай
};

struct building {
  bool has_chimney;  // Дымоход
  double area;
  building_type type;
  std::vector<store> stores;
};

struct plot {
  int number;
  std::vector<building> buildings;
  double area;
};

struct village {
  std::vector<plot> plots;
};
///////////////////////////////////////////////////////////////////////////////
int main() {
  int countRegion;
  int countFloor;
  village village;
  // std::vector<Region> region;
  // Region composition_region;
  std::cout << "Model village" << std::endl;
  std::cout << "Enter the number of areas" << std::endl;
  std::cin >> countRegion;
  std::string setRoom;
  std::string setBake;
  std::string setGarage;
  std::string setShed;
  std::string setBath;
  for (int i = 0; i < countRegion; i++) {
    std::cout << "There is garage (y/n)?" << std::endl;
    std::cin >> setGarage;
    if (setGarage == "y") {
    }
    std::cout << "There is shed (y/n)?" << std::endl;
    std::cin >> setShed;
    if (setShed == "y") {
    }
    std::cout << "There is bath (y/n)?" << std::endl;
    std::cin >> setBath;
    if (setBath == "y") {
      std::cout << "There is bake in bath (y/n)?" << std::endl;
      std::cin >> setBake;
      if (setBake == "y") {
      }
    }
    /**
     * TODO Реализовать заполнение дома
     **/
    std::cout << "Enter the number of floors" << std::endl;
    std::cin >> countFloor;
    for (int i = 0; i < countFloor; i++) {
    }
    // region[i] = composition_region;
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

// std::vector<std::string> rooms; /* Вектор комнат */
// std::vector<double> square; // Площадь комнаты
// нужно сделать структуру "комната" с двумя полями:
// тип комнаты и её площадь. Причём тип лучше
// реализовать с помощью enum, а не string

// И затем сделать вектор "комнат"
// 2. А где задаётся количество этажей? Более того? Где сам этаж?
// Должна быть структура "этаж" с полями: вектор комнат и высота потолка
// А уже в "доме" должен быть вектор этажей
// 3. Вообще, дом, гараж, сарай, баню - можно реализовать
// через структуру "здание". Для этого тоже
// нужно завести поле "тип" и тоже enum
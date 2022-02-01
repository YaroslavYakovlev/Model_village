#include <iostream>
#include <string>
#include <vector>

// bool bedroom;        // Спальня
// bool kitchen;        // Кухня
// bool bathroom;       // Ванная
// bool children_room;  // Детская
// bool living_room;    // Гостиная

enum type_room {
  bedroom,        // Спальня
  kitchen,        // Кухня
  bathroom,       // Ванная
  children_room,  // Детская
  living_room     // Гостиная
};

struct Room {
  std::vector<type_room> type_room;  // Вектор комнат
  std::vector<double> square;        // Площадь комнаты
};

struct Home {
  struct Room room;
  double ceiling_height;  // Высота потолков
  bool bake;
};

struct Region {
  struct Home home;
  bool house = true;    // Дом
  bool garage = false;  // Гараж
  bool shed = false;    // Сарай
  bool bath = false;    // Баня
};

int main() {
  std::cout << "Model village" << std::endl;
  Region region;
  Home home;
  std::string setRoom;
  std::string setBake;
  std::string setGarage;
  std::string setShed;
  std::string setBath;
  int countRegion;
  int countRoom;
  int countFloor;
  double setSquare;

  std::cout << "How many plots are there in the village?" << std::endl;
  std::cin >> countRegion;
  for (int i = 0; i < countRegion; i++) {
    std::cout << "Enter count floor in house" << std::endl;
    std::cin >> countFloor;
    if (countFloor > 0 && countFloor < 4) {
      for (int j = 1; j <= countFloor; j++) {
        std::cout << "Enter ceiling height [" << j << "] floor" << std::endl;
        std::cin >> region.home.ceiling_height;
        std::cout << "Count room" << std::endl;
        std::cin >> countRoom;
        if (countRoom > 1 && countRoom < 5) {
          for (int k = 1; k <= countRoom; k++) {
            std::cout << "Enter room" << std::endl;
            std::cin >> setRoom;
            region.home.room.type_room[k] = setRoom;
            std::cout << "Enter square room" << std::endl;
            std::cin >> setSquare;
            region.home.room.square.push_back(setSquare);
          }
          std::cout << "There is a stove in the house? y/n" << std::endl;
          std::cin >> setBake;
          if (setBake == "y") {
            region.home.bake = true;
          } else {
            region.home.bake = false;
          }
        } else {
          std::cout << "Invalid value rooms" << std::endl;
        }
      }
    } else {
      std::cout << "Invalid value floors" << std::endl;
    }

    std::cout << "Is there a garage on the plot? y/n" << std::endl;
    std::cin >> setGarage;
    if (setGarage == "y") {
      region.garage = true;
    } else {
      region.garage = false;
    }
    std::cout << "Is there a shed on the plot? y/n" << std::endl;
    std::cin >> setShed;
    if (setShed == "y") {
      region.shed = true;
    } else {
      region.shed = false;
    }
    std::cout << "Is there a sauna on the site? y/n" << std::endl;
    std::cin >> setBath;
    if (setBath == "y") {
      region.bath = true;
    } else {
      region.bath = false;
    }
  }

  for (int i = 0; i < region.home.room.type_room.size(); i++) {
    std::cout << i << " " << region.home.room.type_room[i] << " - " << region.home.room.square[i] << std::endl;
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
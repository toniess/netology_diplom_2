#include "game.h"

namespace race
{

    GameStatus Game::play()
    {
        greetUser();
        raceType = chooseRaceType();
        distance = inputDistance();
        registration();
        showResults(execRace());
        cleanRegisterList();
        return wannaPlayMore();
    }

    void Game::greetUser()
    {
        std::cout << "Добро пожаловать в гоночный симулятор!\n";
    }

    double Game::inputDistance()
    {
        int distance = 0;
        while(distance <= 0)
        {
            std::cout << "Укажите длину дистанции (должна быть положительна): ";
            std::cin >> distance;
        }
        return distance;
    }

    RaceType Game::chooseRaceType()
    {
        std::cout << "1. Гонка для наземного транспорта\n";
        std::cout << "2. Гонка для воздушного транспорта\n";
        std::cout << "3. Гонка для наземного и воздушного транспорта\n";

        int choice = 0;
        while(choice > 3 || choice < 1)
        {
            std::cout << "Выберите тип гонки (1 - 3): ";
            std::cin >> choice;
        }
        return RaceType(choice);
    }

    void Game::registration()
    {
        std::cout << "Регистрация (минимум 2 участника):\n";
        std::cout << "1. Ботинки-вездеходы\n";
        std::cout << "2. Верблюд\n";
        std::cout << "3. Верблюд-скороход\n";
        std::cout << "4. Кентавр\n";
        std::cout << "5. Метла\n";
        std::cout << "6. Орел\n";
        std::cout << "7. Ковер-самолет\n";
        std::cout << "0. Закончить регистрацию\n";

        int choice_num = -1;
        while(vehicles.size() < 2 || choice_num != 0)
        {
            std::cout << "Номер регистрируемого: ";
            std::cin >> choice_num;
            Registration choice = static_cast<Registration>(choice_num);
            using r = Registration;
            if(raceType == RaceType::AIR && choice > r::BOOTS && choice < r::BROOM
                    || raceType == RaceType::GROUND && choice > r::CENTAUR && choice <= r::CARPET)
            {
                std::cout << "Транспортное средство не подходит\n";
                continue;
            }
            if(choice_num < 0 || 7 < choice_num)
            {
                std::cout << "Неверный пункт меню\n";
                continue;
            }
            if(vehicles.size() < 2 && choice == r::EXIT)
            {
                std::cout << "Необходимо минимум 2 транспортных средства\n";
                continue;
            }
            if(choice == r::BOOTS)
            {
                vehicles.insert(new AllTerrainBoots());
            }
            else if (choice == r::CAMEL)
            {
                vehicles.insert(new Camel());
            }
            else if (choice == r::CAMEL_RUNNER)
            {
                vehicles.insert(new CamelRunner());
            }
            else if (choice == r::CENTAUR)
            {
                vehicles.insert(new Centaur());
            }
            else if (choice == r::BROOM)
            {
                vehicles.insert(new Broom());
            }
            else if (choice == r::EAGLE)
            {
                vehicles.insert(new Eagle());
            }
            else if (choice == r::CARPET)
            {
                vehicles.insert(new MagicCarpet());
            }
            std::cout << "Транспортное средство зарегистрировано\n";
        }
    }

    Results Game::execRace()
    {
        Results results;
        for(const auto &item : vehicles)
        {
            results.add(item, item->time(distance));
        }
        return results;
    }

    void Game::showResults(Results results)
    {
        std::cout << "Результаты гонки: \n";
        int lineCount = 1;
        for(const auto &[name, time] : results)
        {
            std::cout << lineCount++ << ". " << name << ". Время: " << time << "\n";
        }
    }

    void Game::cleanRegisterList()
    {
        for(const auto &item : vehicles)
        {
            delete item;
        }
        vehicles.clear();
    }

    GameStatus Game::wannaPlayMore()
    {
        std::cout << "Хотите сыграть еще?\n";
        std::cout << "1. Сыграть еще \n";
        std::cout << "2. Выйти\n";
        int choice = 0;
        while(choice < 1 || 2 < choice)
        {
            std::cout << "Введите вариант ответа: ";
            std::cin >> choice;
        }
        return static_cast<GameStatus>(choice);
    }

}

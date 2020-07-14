/*
** EPITECH PROJECT, 2020
** 201yams
** File description:
** main
*/

#include "yams.hpp"

void	usage(void)
{
    std::cout << "USAGE\n\t./201yams d1 d2 d3 d4 d5 c" << std::endl;
    std::cout << "\nDESCRIPTION\n\td1\tvalue of the first die (0 if not thrown)" << std::endl;
    std::cout << "\td2\tvalue of the second die (0 if not thrown)" << std::endl;
    std::cout << "\td3\tvalue of the third die (0 if not thrown)" << std::endl;
    std::cout << "\td4\tvalue of the fourth die (0 if not thrown)" << std::endl;
    std::cout << "\td5\tvalue of the fifth die (0 if not thrown)" << std::endl;
    std::cout << "\tc\texpected combination" << std::endl;
}

int	check_values(YamsValues val)
{
    val.i = 0;
    if (val.y == val.a)
        val.i++;
    if (val.y == val.b)
        val.i++;
    if (val.y == val.c)
        val.i++;
    if (val.y == val.d)
        val.i++;
    if (val.y == val.e)
        val.i++;
    return val.i;
}

int	check_values_second(YamsValues val)
{
    val.i = 0;
    if (val.x == val.a)
        val.i++;
    if (val.x == val.b)
        val.i++;
    if (val.x == val.c)
        val.i++;
    if (val.x == val.d)
        val.i++;
    if (val.x == val.e)
        val.i++;
    return val.i;
}

float	calculatePair(YamsValues val)
{
    if (val.y < 1 || val.y > 6) {
        std::cerr << "Values from 1 to 6 only!" << std::endl;
        exit (84);
    } else {
        if (check_values(val) == 0) {
            val.calc = ((1.0 / 6.0 * 1.0 / 6.0 * 5.0 / 6.0 * 5.0 / 6.0 * 5.0 / 6.0 * 10.0) + (1.0 / 6.0 * 1.0 / 6.0 * 1.0 / 6.0 * 5.0 / 6.0 * 5.0 / 6.0 * 10.0) + (1.0 / 6.0 * 1.0 / 6.0 * 1.0 / 6.0 * 1.0 / 6.0 * 5.0 / 6.0 * 5.0) + (1.0 / 7776.0)) * 100.0;
        }
        if (check_values(val) == 1) {
            val.calc = ((1.0 / 6.0 * 5.0 / 6.0 * 5.0 / 6.0 * 5.0 / 6.0 * 4.0) + (1.0 / 6.0 * 1.0 / 6.0 * 5.0 / 6.0 * 5.0 / 6.0 * 6.0) + (1.0 / 6.0 * 1.0 / 6.0 * 1.0 / 6.0 * 5.0 / 6.0 * 4.0) + 1.0 / 1296.0) * 100.0;
        }
        if (check_values(val) == 2) {
            val.calc = 100.00;
        }
        if (check_values(val) == 3) {
            val.calc = 100.00;
        }
        if (check_values(val) == 4) {
            val.calc = 100.00;
        }
        if (check_values(val) == 5) {
            val.calc = 100.00;
        }
    }
    return val.calc;
}

float	calculateYams(YamsValues val)
{
    if (val.y < 1 || val.y > 6) {
        std::cerr << "Values from 1 to 6 only!" << std::endl;
        exit (84);
    } else {
        if (check_values(val) == 0) {
            val.calc = 1.0 / 6.0 * 1.0 / 6.0 * 1.0 / 6.0 * 1.0 / 6.0 * 1.0 / 6.0 * 100.0;
        }
        if (check_values(val) == 1) {
            val.calc = 1.0 / 6.0 * 1.0 / 6.0 * 1.0 / 6.0 * 1.0 / 6.0 * 100.0;
        }
        if (check_values(val) == 2) {
            val.calc = 1.0 / 6.0 * 1.0 / 6.0 * 1.0 / 6.0 * 100.0;
        }
        if (check_values(val) == 3) {
            val.calc = 1.0 / 6.0 * 1.0 / 6.0 * 100.0;
        }
        if (check_values(val) == 4) {
            val.calc = 1.0 / 6.0 * 100.0;
        }
        if (check_values(val) == 5) {
            val.calc = 100.0;
        }
    }
    return val.calc;
}

float	calculateThree(YamsValues val)
{
    if (val.y < 1 || val.y > 6) {
        std::cerr << "Values from 1 to 6 only!" << std::endl;
        exit (84);
    } else {
        if (check_values(val) == 0) {
            val.calc = ((1.0 / 6.0 * 1.0 / 6.0 * 1.0 / 6.0 * 5.0 / 6.0 * 5.0 / 6.0 * 10.0) + (1.0 / 6.0 * 1.0 / 6.0 * 1.0 / 6.0 * 1.0 / 6.0 * 5.0 / 6.0 * 5.0) + 1.0 / 7776.0) * 100.0;
        }
        if (check_values(val) == 1) {
            val.calc = ((1.0 / 6.0 * 1.0 / 6.0 * 5.0 / 6.0 * 5.0 / 6.0 * 6.0) + (1.0 / 6.0 * 1.0 / 6.0 * 1.0 / 6.0 * 5.0 / 6.0 * 4.0) + 1.0 / 1296.0) * 100.0;
        }
        if (check_values(val) == 2) {
            val.calc = ((1.0 / 6.0 * 5.0 / 6.0 * 5.0 / 6.0 * 3.0) + (1.0 / 6.0 * 1.0 / 6.0 * 5.0 / 6.0 * 3.0) + 1.0 / 216.0) * 100.0;
        }
        if (check_values(val) == 3) {
            val.calc = 100.00;
        }
        if (check_values(val) == 4) {
            val.calc = 100.00;
        }
        if (check_values(val) == 5) {
            val.calc = 100.00;
        }
    }
    return val.calc;
}

float	calculateFour(YamsValues val)
{
    if (val.y < 1 || val.y > 6) {
        std::cerr << "Values from 1 to 6 only!" << std::endl;
        exit (84);
    } else {
        if (check_values(val) == 0) {
            val.calc = ((1.0 / 6.0 * 1.0 / 6.0 * 1.0 / 6.0 * 1.0 / 6.0 * 5.0 / 6.0 * 5.0) + 1.0 / 7776.0) * 100.0;
        }
        if (check_values(val) == 1) {
            val.calc = ((1.0 / 6.0 * 1.0 / 6.0 * 1.0 / 6.0 * 5.0 / 6.0 * 4.0) + 1.0 / 1296.0) * 100.0;
        }
        if (check_values(val) == 2) {
            val.calc = ((1.0 / 6.0 * 1.0 / 6.0 * 5.0 / 6.0 * 3.0) + 1.0 / 216.0) * 100.0;
        }
        if (check_values(val) == 3) {
            val.calc = ((1.0 / 6.0 * 5.0 / 6.0 * 2.0) + 1.0 / 36.0) * 100.0;
        }
        if (check_values(val) == 4) {
            val.calc = 100.00;
        }
        if (check_values(val) == 5) {
            val.calc = 100.00;
        }
    }
    return val.calc;
}

bool	checkVal(YamsValues val, int i)
{
    if (val.a == i || val.b == i || val.c == i || val.d == i || val.e == i)
        return true;
    else
        return false;
}

float	calculateStraight(YamsValues val)
{
    if (val.y < 5 || val.y > 6) {
        std::cerr << "Values 5 and 6 only for straight!" << std::endl;
        exit (84);
    } else {
        if (val.y == 5) {
            if (checkVal(val, 1) == true && checkVal(val, 2) == true && checkVal(val, 3) == true && checkVal(val, 4) == true && checkVal(val, 5) == true) {
                val.calc = 100.00;
            } else if ((checkVal(val, 1) == true && checkVal(val, 2) == true && checkVal(val, 3) == true && checkVal(val, 4) == true) ||
                (checkVal(val, 1) == true && checkVal(val, 2) == true && checkVal(val, 3) == true && checkVal(val, 5) == true) ||
                (checkVal(val, 1) == true && checkVal(val, 2) == true && checkVal(val, 5) == true && checkVal(val, 4) == true) ||
                (checkVal(val, 1) == true && checkVal(val, 3) == true && checkVal(val, 5) == true && checkVal(val, 4) == true) ||
                (checkVal(val, 2) == true && checkVal(val, 3) == true && checkVal(val, 5) == true && checkVal(val, 4) == true)) {
                val.calc = 1.0 / 6.0 * 100.0;
            } else if ((checkVal(val, 1) == true && checkVal(val, 2) == true && checkVal(val, 3) == true) ||
                       (checkVal(val, 1) == true && checkVal(val, 2) == true && checkVal(val, 4) == true) ||
                       (checkVal(val, 1) == true && checkVal(val, 2) == true && checkVal(val, 5) == true) ||
                       (checkVal(val, 1) == true && checkVal(val, 4) == true && checkVal(val, 3) == true) ||
                       (checkVal(val, 1) == true && checkVal(val, 5) == true && checkVal(val, 3) == true) ||
                       (checkVal(val, 1) == true && checkVal(val, 4) == true && checkVal(val, 5) == true) ||
                       (checkVal(val, 4) == true && checkVal(val, 2) == true && checkVal(val, 3) == true) ||
                       (checkVal(val, 5) == true && checkVal(val, 2) == true && checkVal(val, 3) == true) ||
                       (checkVal(val, 4) == true && checkVal(val, 5) == true && checkVal(val, 3) == true)) {
                val.calc = 1.0 / 18.0 * 100.0;
            } else if ((checkVal(val, 1) == true && checkVal(val, 2) == true) ||
                       (checkVal(val, 1) == true && checkVal(val, 3) == true) ||
                       (checkVal(val, 1) == true && checkVal(val, 4) == true) ||
                       (checkVal(val, 1) == true && checkVal(val, 5) == true) ||
                       (checkVal(val, 3) == true && checkVal(val, 2) == true) ||
                       (checkVal(val, 4) == true && checkVal(val, 2) == true) ||
                       (checkVal(val, 5) == true && checkVal(val, 2) == true) ||
                       (checkVal(val, 3) == true && checkVal(val, 4) == true) ||
                       (checkVal(val, 3) == true && checkVal(val, 5) == true) ||
                       (checkVal(val, 4) == true && checkVal(val, 5) == true)) {
                val.calc = 3.0 / 216.0 * 2.0 * 100.0;
            } else if (checkVal(val, 1) == true || checkVal(val, 2) == true ||
                       checkVal(val, 3) == true || checkVal(val, 4) == true ||
                       checkVal(val, 5) == true) {
                val.calc = 24.0 / 1296.0 * 100.0;
            } else
                val.calc = 120.0 / 7776.0 * 100.0;
        }
        if (val.y == 6) {
            if (checkVal(val, 6) == true && checkVal(val, 2) == true && checkVal(val, 3) == true && checkVal(val, 4) == true && checkVal(val, 5) == true) {
                val.calc = 100.00;
            } else if ((checkVal(val, 6) == true && checkVal(val, 2) == true && checkVal(val, 3) == true && checkVal(val, 4) == true) ||
                (checkVal(val, 6) == true && checkVal(val, 2) == true && checkVal(val, 3) == true && checkVal(val, 5) == true) ||
                (checkVal(val, 6) == true && checkVal(val, 2) == true && checkVal(val, 5) == true && checkVal(val, 4) == true) ||
                (checkVal(val, 6) == true && checkVal(val, 3) == true && checkVal(val, 5) == true && checkVal(val, 4) == true) ||
                (checkVal(val, 2) == true && checkVal(val, 3) == true && checkVal(val, 5) == true && checkVal(val, 4) == true)) {
                val.calc = 1.0 / 6.0 * 100.0;
            } else if ((checkVal(val, 6) == true && checkVal(val, 2) == true && checkVal(val, 3) == true) ||
                       (checkVal(val, 6) == true && checkVal(val, 2) == true && checkVal(val, 4) == true) ||
                       (checkVal(val, 6) == true && checkVal(val, 2) == true && checkVal(val, 5) == true) ||
                       (checkVal(val, 6) == true && checkVal(val, 4) == true && checkVal(val, 3) == true) ||
                       (checkVal(val, 6) == true && checkVal(val, 5) == true && checkVal(val, 3) == true) ||
                       (checkVal(val, 6) == true && checkVal(val, 4) == true && checkVal(val, 5) == true) ||
                       (checkVal(val, 4) == true && checkVal(val, 2) == true && checkVal(val, 3) == true) ||
                       (checkVal(val, 5) == true && checkVal(val, 2) == true && checkVal(val, 3) == true) ||
                       (checkVal(val, 4) == true && checkVal(val, 5) == true && checkVal(val, 3) == true)) {
                val.calc = 1.0 / 18.0 * 100.0;
            } else if ((checkVal(val, 6) == true && checkVal(val, 2) == true) ||
                       (checkVal(val, 6) == true && checkVal(val, 3) == true) ||
                       (checkVal(val, 6) == true && checkVal(val, 4) == true) ||
                       (checkVal(val, 6) == true && checkVal(val, 5) == true) ||
                       (checkVal(val, 3) == true && checkVal(val, 2) == true) ||
                       (checkVal(val, 4) == true && checkVal(val, 2) == true) ||
                       (checkVal(val, 5) == true && checkVal(val, 2) == true) ||
                       (checkVal(val, 3) == true && checkVal(val, 4) == true) ||
                       (checkVal(val, 3) == true && checkVal(val, 5) == true) ||
                       (checkVal(val, 4) == true && checkVal(val, 5) == true)) {
                val.calc = 3.0 / 216.0 * 2.0 * 100.0;
            } else if (checkVal(val, 6) == true || checkVal(val, 2) == true ||
                       checkVal(val, 3) == true || checkVal(val, 4) == true ||
                       checkVal(val, 5) == true) {
                val.calc = 24.0 / 1296.0 * 100.0;
            } else
                val.calc = 120.0 / 7776.0 * 100.0;
        }
    }
    return val.calc;
}

float	calculateFullHouse(YamsValues val)
{
    if (val.y < 1 || val.y > 6 || val.x < 1 || val.x > 6) {
        std::cerr << "Values from 1 to 6 only!" << std::endl;
        exit (84);
    } else if (val.y == val.x) {
        exit (84);
    } else {
        if (check_values(val) == 3 && check_values_second(val) == 2) {
            val.calc = 100.0;
        } else {
            if (check_values(val) >= 3) {
                if (check_values_second(val) == 1)
                    val.calc = 1.0 / 6.0 * 100.0;
                else
                    val.calc = 1.0 / 36.0 * 100.0;
            } else if (check_values(val) == 2) {
                if (check_values_second(val) >= 2) {
                    val.calc = 1.0 / 6.0 * 100.0;
                } else if (check_values_second(val) == 1) {
                    val.calc = 2.0 / 36.0 * 100.0;
                } else {
                    val.calc = 3.0 / 216.0 * 100.0;
                }
            } else if (check_values(val) == 1) {
                if (check_values_second(val) >= 2) {
                    val.calc = 1.0 / 36.0 * 100.0;
                } else if (check_values_second(val) == 1) {
                    val.calc = 3.0 / 216.0 * 100.0;
                } else {
                    val.calc = 1.0 / 216.0 * 100.0;
                }
            } else {
                if (check_values_second(val) >= 2) {
                    val.calc = 1.0 / 216.0 * 100.0;
                } else if (check_values_second(val) == 1) {
                    val.calc = 4.0 / 1296.0 * 100.0;
                } else {
                    val.calc = 10.0 / 7776.0 * 100.0;
                }
            }
        }
    }
    return val.calc;
}


int	check_zero(YamsValues val)
{
    if ((val.a == 0 || val.b == 0 || val.c == 0 || val.d == 0 || val.e == 0) &&
        (val.a != val.b != val.c != val.d != val.e)) {
        std::cerr << "Values 0 if not thrown only!" << std::endl;
        val.zero = 1;
    } else {
        val.zero = 0;
    }
    return val.zero;
}

void	get_option(std::string str, YamsValues val)
{
    std::size_t yams = str.find("yams_");
    std::size_t pair = str.find("pair_");
    std::size_t three = str.find("three_");
    std::size_t four = str.find("four_");
    std::size_t straight = str.find("straight_");
    std::size_t full = str.find("full_");

    if (check_zero(val) == 1)
        exit (84);
    if ((yams != 0 && pair != 0 && three != 0 && four != 0 && straight != 0 && full != 0) || (str.compare("yams_") == 0 || str.compare("pair_") == 0 || str.compare("three_") == 0 || str.compare("four_") == 0 || str.compare("straight_") == 0 || str.compare("full_") == 0)) {
        std::cerr << "Invalid combination!" << std::endl;
        exit (84);
    }
    if (yams == 0) {
        std::string yn = str.substr(str.find("_") + 1);
        for (int i = 0; i < yn.length(); i++) {
            if (yn[i] < 48 || yn[i] > 57) {
                std::cerr << "Invalid combination value" << std::endl;
                exit (84);
            }
        }
        val.y = stoi(yn);
        if (val.y < 1 || val.y > 6) {
            std::cerr << "Values from 1 to 6 only!" << std::endl;
            exit (84);
        } else {
            std::cout << "Chances to get a " << val.y << " yams: " << std::fixed << std::setprecision(2) << calculateYams(val) << "%" << std::endl;
        }
    }
    if (pair == 0) {
        std::string pn = str.substr(str.find("_") + 1);
        for (int i = 0; i < pn.length(); i++) {
            if (pn[i] < 48 || pn[i] > 57) {
                std::cerr << "Invalid combination value" << std::endl;
                exit (84);
            }
        }
        val.y = stoi(pn);
        if (val.y < 1 || val.y > 6) {
            std::cerr << "Values from 1 to 6 only!" << std::endl;
            exit (84);
        } else {
            std::cout << "Chances to get a " << val.y << " pair: " << std::fixed << std::setprecision(2) << calculatePair(val) << "%" << std::endl;
        }
    }
    if (three == 0) {
        std::string tn = str.substr(str.find("_") + 1);
        for (int i = 0; i < tn.length(); i++) {
            if (tn[i] < 48 || tn[i] > 57) {
                std::cerr << "Invalid combination value" << std::endl;
                exit (84);
            }
        }
        val.y = stoi(tn);
        if (val.y < 1 || val.y > 6) {
            std::cerr << "Values from 1 to 6 only!" << std::endl;
            exit (84);
        } else {
            std::cout << "Chances to get a " << val.y << " three-of-a-kind: " << std::fixed << std::setprecision(2) << calculateThree(val) << "%" << std::endl;
        }
    }
    if (four == 0) {
        std::string fn = str.substr(str.find("_") + 1);
        for (int i = 0; i < fn.length(); i++) {
            if (fn[i] < 48 || fn[i] > 57) {
                std::cerr << "Invalid combination value" << std::endl;
                exit (84);
            }
        }
        val.y = stoi(fn);
        if (val.y < 1 || val.y > 6) {
            std::cerr << "Values from 1 to 6 only!" << std::endl;
            exit (84);
        } else {
            std::cout << "Chances to get a " << val.y << " four-of-a-kind: " << std::fixed << std::setprecision(2) << calculateFour(val) << "%" << std::endl;
        }
    }
    if (straight == 0) {
        std::string sn = str.substr(str.find("_") + 1);
        for (int i = 0; i < sn.length(); i++) {
            if (sn[i] < 48 || sn[i] > 57) {
                std::cerr << "Invalid combination value" << std::endl;
                exit (84);
            }
        }
        val.y = stoi(sn);
        if (val.y < 5 || val.y > 6) {
            std::cerr << "Values 5 and 6 only for straight!" << std::endl;
            exit (84);
        } else {
            std::cout << "Chances to get a " << val.y << " straight: " << std::fixed << std::setprecision(2) << calculateStraight(val) << "%" << std::endl;
        }
    }
    if (full == 0) {
        std::string fun = str.substr(str.find("_") + 1);
        if (fun.length() != 3) {
            std::cerr << "Invalid combination value" << std::endl;
            exit (84);
        } else {
            if (fun[0] < 48 || fun[0] > 57 || fun[2] < 48 || fun[2] > 57 || fun[1] != 95) {
                std::cerr << "Invalid combination value" << std::endl;
                exit (84);
            }
            std::size_t s = str.find("_");
            std::string start = str.substr(s + 1);
            std::size_t t = start.find("_");
            std::string dx = start.substr(0, 1);
            std::string dd = start.substr(t + 1);
            val.y = stoi(dx);
            val.x = stoi(dd);
            if (val.y < 1 || val.y > 6 || val.x < 1 || val.x > 6) {
                std::cerr << "Values from 1 to 6 only!" << std::endl;
                exit (84);
            } else if (val.y == val.x) {
                std::cerr << "Different values for full house!" << std::endl;
                exit (84);
            } else {
                std::cout << "Chances to get a " << val.y << " full of " << val.x << ": " << std::fixed << std::setprecision(2) << calculateFullHouse(val) << "%" << std::endl;
            }
        }
    }
}

int	storeValues(int ac, char **av)
{
    int i = 0;
    YamsValues val;
    for (i = 1; i < 6; i++);
    if (atoi(av[i]) < 0 || atoi(av[i]) > 6) {
        std::cerr << "Please enter valid arguments!" << std::endl;
        return 84;
    } else {
        for (int i = 1; i < ac - 1; i++) {
            std::string store = av[i];
            for (int j = 0; j < store.length(); j++) {
                if (store[j] < 48 || store[j] > 54) {
                    std::cerr << "Invalid values" << std::endl;
                    exit (84);
                } else {
                    val.a = atoi(av[1]);
                    val.b = atoi(av[2]);
                    val.c = atoi(av[3]);
                    val.d = atoi(av[4]);
                    val.e = atoi(av[5]);
                    val.str = av[6];
                    val.i = 0;
                    val.zero = 0;
                }
            }
        }
        get_option(val.str, val);
    }
    return 0;
}

int	main(int ac, char **av)
{
    if (ac == 2) {
        if (av[1][0] == '-' && av[1][1] == 'h' && !av[1][2]) {
            usage();
        } else {
            std::cerr << "Not enough arguments given!" << std::endl;
            exit (84);
        }
    } else if (ac == 7) {
        storeValues(ac, av);
    } else {
        std::cerr << "Wrong number of arguments!" << std::endl;
        exit (84);
    }
    return 0;
}

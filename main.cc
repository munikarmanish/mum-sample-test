/**
 *  MUM Sample Test Solution
 */
#include <iostream>
#include <vector>

int is_centered(std::vector<int> &list)
{
    if (list.size() % 2 == 0) return 0;
    int c_i = (list.size() - 1) / 2;
    int c_v = list[c_i];
    for (int i = 0; i < list.size(); i++) {
        if (i != c_i && list[i] <= c_v) return 0;
    }
    return 1;
}

int odd_minus_even(std::vector<int> &list)
{
    int sum_odd = 0;
    int sum_even = 0;
    for (int i = 0; i < list.size(); i++) {
        if (i % 2 == 0) {
            sum_odd += list[i];
        } else {
            sum_even += list[i];
        }
    }
    return sum_odd - sum_even;
}

std::vector<char> sub_array(std::vector<char> &array, int start, int length)
{
    std::vector<char> y;
    return y;
}

int reverse_int(int x)
{
    int sign = (x < 0) ? -1: 1;
    x *= sign;

    int y = 0;
    while (x != 0) {
        y = (y*10) + (x%10);
        x /= 10;
    }

    return y * sign;
}

int poe(std::vector<int> &list)
{
    if (list.size() < 3) return -1;

    for (int i = 1; i < list.size()-1; i++) {
        int sum_l = 0, sum_r = 0;
        for (int i_l = 0; i_l < i; i_l++)
            sum_l += list[i_l];
        for (int i_r = i+1; i_r < list.size(); i_r++)
            sum_r += list[i_r];
        if (sum_l == sum_r)
            return i;
        else if (sum_l > sum_r)
            continue;
    }

    return -1;
}

int main()
{
    std::cout << "hello world" << std::endl;
    return 0;
}

//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "join_containers.h"
#include <iostream>
#include <vector>
#include <iterator>
using namespace std;

static void test_1_5() {
    auto res = join_containers(vector<int>{1, 2, 3, 4, 5});
    copy(begin(res), end(res), ostream_iterator<int>(cout, " "));

}

TEST_CASE("Question #1.5") {
    execute_test("test_1_5.in", test_1_5);
}
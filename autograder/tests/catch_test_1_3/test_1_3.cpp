//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "join_containers.h"
#include <iostream>
#include <vector>
#include <list>
#include <forward_list>
#include <deque>
#include <iterator>
using namespace std;

static void test_1_3() {
    vector v = {1, 2, 3};
    list<int> l;
    forward_list f = {7, 8, 9};
    auto res = join_containers(v, l, f);
    copy(begin(res), end(res), ostream_iterator<int>(cout, " "));
}

TEST_CASE("Question #1.3") {
    execute_test("test_1_3.in", test_1_3);
}
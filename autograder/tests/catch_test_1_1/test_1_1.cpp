//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "join_containers.h"
#include <iostream>
#include <vector>
#include <list>
#include <deque>
#include <iterator>
using namespace std;

static void test_1_1() {
    vector v1 = {1, 2, 3};
    list l1 = {4, 5, 6};
    vector v2 = {7, 8, 9};
    deque d1 = {10, 11, 12};
    auto res = join_containers(v1, l1, v2, d1);
    copy(begin(res), end(res), ostream_iterator<int>(cout, " "));
}

TEST_CASE("Question #1.1") {
    execute_test("test_1_1.in", test_1_1);
}
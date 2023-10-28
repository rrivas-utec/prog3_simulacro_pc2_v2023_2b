//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "parallel_variance.h"
#include <list>
using namespace std;

static void test_2_4() {
    int n = 0; cin >> n;
    list<int> lst(n);
    for(auto& item: lst) cin >> item;
    auto res = parallel_variance(begin(lst), end(lst));
    cout << res;
}

TEST_CASE("Question #2.4") {
    execute_test("test_2_4.in", test_2_4);
}
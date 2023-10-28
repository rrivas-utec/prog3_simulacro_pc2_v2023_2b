//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "parallel_variance.h"
#include <vector>
using namespace std;

static void test_2_1() {
    int n = 0; cin >> n;
    vector<double> vec(n);
    for(auto& item: vec) cin >> item;
    auto res = parallel_variance(begin(vec), end(vec));
    cout << res;
}

TEST_CASE("Question #2.1") {
    execute_test("test_2_1.in", test_2_1);
}
//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "parallel_variance.h"
#include <vector>
using namespace std;

static void test_2_2() {
    int n = 0; cin >> n;
    vector<int> vec(n);
    for(auto& item: vec) cin >> item;
    auto res = parallel_variance(begin(vec), end(vec));
    cout << res;
}

TEST_CASE("Question #2.2") {
    execute_test("test_2_2.in", test_2_2);
}
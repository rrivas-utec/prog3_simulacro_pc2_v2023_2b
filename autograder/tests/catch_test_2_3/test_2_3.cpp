//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "parallel_variance.h"
#include <deque>
using namespace std;

static void test_2_3() {
    int n = 0; cin >> n;
    deque<int> deq(n);
    for(auto& item: deq) cin >> item;
    auto res = parallel_variance(begin(deq), end(deq));
    cout << res;
}

TEST_CASE("Question #2.3") {
    execute_test("test_2_3.in", test_2_3);
}
#pragma once

#define ll long long

#include <iostream>
#include <unordered_map>
#include "solution.h"

using namespace std;

void NormalSolution::solution() {

  unordered_map<ll, ll> mp;
  ll ans = 0;
  ll base = 13;
  for (ll i = 0; i < (ll)pow(13, 6); ++i) {
    mp[i] = 0;
  }

  for (ll sym_1 = 0; sym_1 < base; ++sym_1) {
    for (ll sym_2 = 0; sym_2 < base; ++sym_2) {
      for (ll sym_3 = 0; sym_3 < base; ++sym_3) {
        for (ll sym_4 = 0; sym_4 < base; ++sym_4) {
          for (ll sym_5 = 0; sym_5 < base; ++sym_5) {
            for (ll sym_6 = 0; sym_6 < base; ++sym_6) {
              ll cur_sum = sym_1 + sym_2 + sym_3 + sym_4 + sym_5 + sym_6;
              ++mp[cur_sum];
            }
          }
        }
      }
    }
  }

  ll test_sum = 0;
  for (auto & i : mp) {
    test_sum += i.second;
    ans += (i.second * i.second);
  }
  cout << "Total amount of pretty numbers is: " << ans * 13LL << "\n";
}

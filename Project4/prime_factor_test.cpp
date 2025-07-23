#include "gmock/gmock.h"
#include "prime_factor.cpp"

TEST(PrimeFactors, tc1) {
	PrimeFactors prime_factor;
	vector<int> expected = {};
	EXPECT_EQ(expected, prime_factor.of(1));
}

TEST(PrimeFactors, tc2) {
	PrimeFactors prime_factor;
	vector<int> expected = {2};
	EXPECT_EQ(expected, prime_factor.of(2));
}


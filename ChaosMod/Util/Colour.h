#pragma once

#include <stdafx.h>

struct RGBA
{
	unsigned int R, G, B, A;
};

// Returns a random RGBA value without a random alpha: 255 or max.
inline RGBA GetRandomColourRGB(unsigned int min = 0, unsigned int max = 255)
{
	return { (unsigned int)GetRandomInt(min, max), (unsigned int)GetRandomInt(min, max), (unsigned int)GetRandomInt(min, max), max };
}

// Returns a random RGBA value with a random alpha.
inline RGBA GetRandomColourRGBA(unsigned int min = 0, unsigned int max = 255)
{
	return { (unsigned int)GetRandomInt(min, max), (unsigned int)GetRandomInt(min, max), (unsigned int)GetRandomInt(min, max), (unsigned int)GetRandomInt(min, max) };
}
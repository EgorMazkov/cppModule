#ifndef SERIALIZATION_HPP
#define SERIALIZATION_HPP

struct Serialization
{
	const char s;
	const char h;
	const char i;
	const char t;
	Serialization():	s('b'),
			h('i'),
			i('b'),
			t('a')
	{}
};

#endif


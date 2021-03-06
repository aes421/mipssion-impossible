#ifndef LIBMIEMU_H
#define LIBMIEMU_H

#include "datapath.h"
#include "program_memory.h"
#include "controller.h"

class Emulator
{
	Datapath _datapath;
	Memory _memory;
	Controller _controller;

public:
	Emulator();
	~Emulator();

	void run();
	void step();

	const Datapath& datapath() const;
	const Memory& memory() const;
	const Controller& controller() const;
};

#endif

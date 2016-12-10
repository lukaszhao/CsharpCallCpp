// ClassLibrary1.h

#pragma once

using namespace System;

namespace ClassLibrary1 {

	public ref class Class1
	{
	private:
		int d_i;
	public:
		Class1() : d_i(5)
		{

		}

		//getter
		int i();
	};
}

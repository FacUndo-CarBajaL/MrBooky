#pragma once
namespace MrBookyController {
	ref class DuplicateBookException: public::System::Exception{
	public:
		DuplicateBookException(System::String^ message) : Exception(message) {}
	};
}



#pragma once
namespace MrBookyController {
	ref class NotFoundException : public::System::Exception {
	public:
		NotFoundException(System::String^ message) : Exception(message) {}
	};
}


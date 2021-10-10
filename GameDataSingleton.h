#pragma once

#include <string>

namespace player {
	class Position;
}

class GameDataSingleton {
protected:
	GameDataSingleton(const std::string value) : value_(value) {}

	std::string value_;

	static GameDataSingleton* singleton;
public:
	GameDataSingleton(GameDataSingleton& other) = delete;

	static GameDataSingleton* getInstance(const std::string& value);

	void someBusinessLogic() {}

	std::string value();
};
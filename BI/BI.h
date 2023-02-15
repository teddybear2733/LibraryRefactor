#pragma once
#include "BIExports.h"

#include <string>
/// <summary>
/// Utility class for our Business Intelligence module
/// </summary>
class BI_API BusinessIntelligence
{
public:
	

	void LogSomething(std::string something);

private:

	BusinessIntelligence();
};

extern BI_API BusinessIntelligence* GetBusinessIntelligence();
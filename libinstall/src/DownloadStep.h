#ifndef _DOWNLOADSTEP_H
#define _DOWNLOADSTEP_H
#include <windows.h>
#include <string>
#include "InstallStep.h"
#include <tchar.h>
#include "tstring.h"


class DownloadStep : public InstallStep
{
public:
	DownloadStep(const TCHAR* url);
	~DownloadStep() {};
	
	BOOL Perform(tstring& basePath);

private:
	tstring	_url;
};

#endif

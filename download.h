/* Copyright (C) 2015 Jesse Busman
/* This program is free software: you can redistribute it and/or modify
/* it under the terms of the GNU General Public License as published by
/* the Free Software Foundation, either version 3 of the License, or
/* (at your option) any later version.
/* This program is distributed in the hope that it will be useful,
/* but WITHOUT ANY WARRANTY; without even the implied warranty of
/* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
/* GNU General Public License for more details.
/* You should have received a copy of the GNU General Public License
/* along with this program.  If not, see <http://www.gnu.org/licenses/>  */

#ifndef downloader_included
#define downloader_included yes

#include "const_str.h"

class downloadArgs
{
public:
	int* downloadingPage;
	ConstStr* downloadedData;
	ConstStr* downloadedHeaders;
	ConstStr* downloadedHTML;
	ConstStr* host;
	ConstStr* path;
	ConstStr* userAgent;
	downloadArgs(int* downloadingPage,
				ConstStr* downloadedData,
				ConstStr* downloadedHeaders,
				ConstStr* downloadedHTML,
				ConstStr* host,
				ConstStr* path,
				ConstStr* userAgent):
		downloadingPage(downloadingPage),
		downloadedData(downloadedData),
		downloadedHeaders(downloadedHeaders),
		downloadedHTML(downloadedHTML),
		host(host),
		path(path),
		userAgent(userAgent){};
};
void* downloadThreadFunc(void* voidStar);

#endif

/***********************************************************************
 ** Reykjavik University
 ** Grímur Tómasson
 ** Copyright (c) 2010. All rights reserved.
 **********************************************************************/


#ifndef ObjectCube_DATE_RANGE_FILTER_CONVERTER_
#define ObjectCube_DATE_RANGE_FILTER_CONVERTER_

#include <memory>

#include "FilterConverter.h"

namespace ObjectCube 
{	
	class FilterDataAccess;
	
	class DateRangeFilterConverter : public FilterConverter
	{
	protected:
		virtual auto_ptr<FilterDataAccess> logicToDataAccess_( const Filter* filter );
		
	};
}

#endif
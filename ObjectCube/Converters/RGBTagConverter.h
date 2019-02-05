/*
 *  RGBTagConverter.h
 *  ObjectCube
 */

#ifndef ObjectCube_RGB_TAG_CONVERTER_
#define ObjectCube_RGB_TAG_CONVERTER_

#ifdef __APPLE__
#include <memory>
using std::shared_ptr;
#else
#include <tr1/memory>
using std::tr1::shared_ptr;
#endif

#include "TagConverter.h"

using namespace std;

namespace ObjectCube 
{	
	class RGBTagDataAccess;
	
	class RGBTagConverter : public TagConverter
	{
	protected:
		virtual shared_ptr<Tag> dataAccessToLogic_( const TagDataAccess* tagDA );
		virtual auto_ptr<TagDataAccess> logicToDataAccess_( const Tag* tag );
		
	};
}

#endif
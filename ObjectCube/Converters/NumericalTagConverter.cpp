/*
 *  NumericalTagConverter.cpp
 *  ObjectCube
 *
 *  Created by Grímur Tómasson on 27.3.2010.
 *  Copyright 2010 Reykjavik University. All rights reserved.
 *
 */

#include "NumericalTagConverter.h"

#include "../Tag/NumericalTag.h"
#include "../DataAccess/Root/NumericalTagDataAccess.h"
#include "../DataAccess/Factories/NumericalTagDataAccessFactory.h"
#include "TagConverter.h"

using namespace ObjectCube;

//____________________________________________________________________________________________________________________________________________________________________________________

shared_ptr<Tag> NumericalTagConverter::dataAccessToLogic_( const TagDataAccess* tagDA )
{
	shared_ptr<Tag> tag( TagConverter::dataAccessToLogic_( tagDA ) );
	NumericalTag* nTag = dynamic_cast<NumericalTag*>( tag.get() );
	
	const NumericalTagDataAccess* nTagDA = dynamic_cast<const NumericalTagDataAccess*>( tagDA );
	if( nTagDA )
	{
		nTag->setNumber( nTagDA->getNumber() );
	}
	
	return tag;
}
//____________________________________________________________________________________________________________________________________________________________________________________

auto_ptr<TagDataAccess> NumericalTagConverter::logicToDataAccess_( const Tag* tag )
{
	auto_ptr<NumericalTagDataAccess> tagDA( dynamic_cast<NumericalTagDataAccess*>( TagConverter::logicToDataAccess_( tag ).release() ) );
	
	tagDA->setNumber( dynamic_cast<const NumericalTag*>( tag )->getNumber() );
	
	return auto_ptr<TagDataAccess>( tagDA.release() );
}
//____________________________________________________________________________________________________________________________________________________________________________________

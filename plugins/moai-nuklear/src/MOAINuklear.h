#ifndef	MOAINUKLEAR_H
#define	MOAINUKLEAR_H
#include <moai-core/headers.h>
#include <moai-sim/MOAIRenderable.h>
#include "nuklear_moai.h"

//================================================================//
// MOAINuklear
//================================================================//
/**	@lua	MOAINuklear
@text	Renders Nuklear based GUI
*/
class MOAINuklear :
	public MOAIRenderable {

protected:
	nk_context ctx;
	struct nk_font_atlas atlas;
public:
	DECL_LUA_FACTORY(MOAINuklear)
	//----------------------------------------------------------------//
	MOAINuklear();
	virtual				~MOAINuklear();
	void		Render();
};

#endif


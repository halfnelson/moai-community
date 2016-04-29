#include "MOAINuklear.h"

//================================================================//
// MOAINuklear
//================================================================//

//----------------------------------------------------------------//
MOAINuklear::MOAINuklear() {
	RTTI_BEGIN
		RTTI_EXTEND(MOAIRenderable)
	RTTI_END

}

//----------------------------------------------------------------//
MOAINuklear::~MOAINuklear() {
	nk_init_default(&ctx, 0);


	nk_font_atlas_init_default(&atlas);
	nk_font_atlas_begin(&atlas);
	const void *image; int w, h;
	image = nk_font_atlas_bake(&atlas, &w, &h, NK_FONT_ATLAS_RGBA32);

	struct nk_glfw_device *dev = &glfw.ogl;
	glGenTextures(1, &dev->font_tex);
	glBindTexture(GL_TEXTURE_2D, dev->font_tex);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, (GLsizei)width, (GLsizei)height, 0,
		GL_RGBA, GL_UNSIGNED_BYTE, image);


	nk_glfw3_device_upload_atlas(image, w, h);
	nk_font_atlas_end(&glfw.atlas, nk_handle_id((int)glfw.ogl.font_tex), &glfw.ogl.null);
	if (glfw.atlas.default_font)
		nk_style_set_font(&glfw.ctx, &glfw.atlas.default_font->handle);

	nk_glfw3_font_stash_begin(&atlas);
	
	nk_glfw3_font_stash_end();
}

void MOAINuklear::Render()
{

}

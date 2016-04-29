#ifndef NK_MOAI_H_
#define NK_MOAI_H_

#define NK_INCLUDE_FIXED_TYPES = 1
#define NK_INCLUDE_DEFAULT_ALLOCATOR = 1
#define NK_INCLUDE_VERTEX_BUFFER_OUTPUT = 1
#define NK_INCLUDE_FONT_BAKING = 1
#define NK_INCLUDE_DEFAULT_FONT = 1
#include "nuklear.h"



//NK_API void nk_moai_init();
//NK_API void nk_glfw3_font_stash_begin(struct nk_font_atlas **atlas);
//NK_API void nk_glfw3_font_stash_end(void);

NK_API void nk_moai_new_frame(nk_context *ctx);
NK_API void nk_moai_render(nk_context *ctx, enum nk_anti_aliasing , int max_vertex_buffer, int max_element_buffer);
//NK_API void nk_moai_shutdown(void);

NK_API void nk_moai_device_destroy(void);
NK_API void nk_moai_device_create(void);

//NK_API void nk_glfw3_char_callback(GLFWwindow *win, unsigned int codepoint);
//NK_API void nk_gflw3_scroll_callback(GLFWwindow *win, double xoff, double yoff);

#endif

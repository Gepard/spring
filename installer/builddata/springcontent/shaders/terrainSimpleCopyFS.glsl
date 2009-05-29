<<<<<<< HEAD:installer/builddata/springcontent/shaders/terrainSimpleCopyFS.glsl

#ifdef UseTextureRECT
	uniform sampler2DRect sourceTexture;
	void main()
	{
		gl_FragColor=texture2DRect(sourceTexture, gl_FragCoord.xy);
	}
#else
	uniform sampler2D sourceTexture;
	uniform vec2 invScreenDim; 

	void main()
	{
		gl_FragColor = texture2D(sourceTexture, gl_FragCoord.xy * invScreenDim);
	}
#endif
=======

#ifdef UseTextureRECT
	uniform sampler2DRect sourceTexture;
	void main()
	{
		gl_FragColor=texture2DRect(sourceTexture, gl_FragCoord.xy);
	}
#else
	uniform sampler2D sourceTexture;
	uniform vec2 invScreenDim; 

	void main()
	{
		gl_FragColor = texture2D(sourceTexture, gl_FragCoord.xy * invScreenDim);
	}
#endif
>>>>>>> remotes/gepard/master:installer/builddata/springcontent/shaders/terrainSimpleCopyFS.glsl

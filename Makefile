.PHONY: clean All

All:
	@echo "----------Building project:[ PngToScreen -  ]----------"
	@cd "PngToScreen" && $(MAKE) -f  "PngToScreen.mk"
clean:
	@echo "----------Cleaning project:[ PngToScreen -  ]----------"
	@cd "PngToScreen" && $(MAKE) -f  "PngToScreen.mk" clean

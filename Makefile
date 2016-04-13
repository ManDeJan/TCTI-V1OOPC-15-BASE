.PHONY: clean All

All:
	@echo "----------Building project:[ 06-template -  ]----------"
	@cd "06-template" && $(MAKE) -f  "06-template.mk"
clean:
	@echo "----------Cleaning project:[ 06-template -  ]----------"
	@cd "06-template" && $(MAKE) -f  "06-template.mk" clean

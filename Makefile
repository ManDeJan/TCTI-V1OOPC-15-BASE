.PHONY: clean All

All:
	@echo "----------Building project:[ Opdracht6-2 -  ]----------"
	@cd "Opdracht6-2" && $(MAKE) -f  "Opdracht6-2.mk"
clean:
	@echo "----------Cleaning project:[ Opdracht6-2 -  ]----------"
	@cd "Opdracht6-2" && $(MAKE) -f  "Opdracht6-2.mk" clean

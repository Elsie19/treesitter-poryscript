vim.filetype.add({ extension = { poryscript = "pory" } })

vim.api.nvim_create_autocmd("FileType", {
    pattern = "poryscript",
    callback = function(event) vim.bo[event.buf].commentstring = "# %s" end,
})

require("nvim-treesitter.parsers").get_parser_configs().poryscript = {
    install_info = {
        url = "https://github.com/Elsie19/treesitter-poryscript",
        files = { "src/parser.c" },
        branch = "master",
        requires_generate_from_grammar = false,
    },
    filetype = "pory",
}

vim.treesitter.language.register('poryscript', 'pory')
